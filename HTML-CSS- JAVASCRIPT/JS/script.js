document.getElementById('mostra-prodotti').addEventListener('click', function () {
    fetch('prodotti.json')
        .then(response => {
            if (!response.ok) throw new Error('File prodotti.json non trovato');
            return response.json();
        })
        .then(prodotti => mostraProdotti(prodotti))
        .catch(error => alert('Errore nel caricamento dei prodotti: ' + error.message));
});

const carrello = [];

function mostraProdotti(prodotti) {
    const lista = document.getElementById('lista-prodotti');
    lista.innerHTML = '';
    prodotti.forEach((prodotto, i) => {
        const div = document.createElement('div');
        div.className = 'prodotto';
        div.innerHTML = `
      <img src="${prodotto.immagine}" alt="img" width="60" height="60">
      <div>
        <strong>${prodotto.nome}</strong><br>
        Tipo: ${prodotto.tipo}<br>
        Prezzo: €${prodotto.prezzo}
      </div>
      <span class="carrello" data-index="${i}">🛒</span>
    `;
        lista.appendChild(div);
    });

    document.querySelectorAll('.carrello').forEach(btn => {
        btn.addEventListener('click', function () {
            const index = this.getAttribute('data-index');
            aggiungiAlCarrello(prodotti[index]);
        });
    });
}

function aggiungiAlCarrello(prodotto) {
    carrello.push(prodotto);
    aggiornaCarrello();
}

function aggiornaCarrello() {
    const carrelloDiv = document.getElementById('carrello-container');
    if (carrello.length === 0) {
        carrelloDiv.innerHTML = '';
        return;
    }
    carrelloDiv.innerHTML = '<h3>Carrello:</h3><ul>' +
        carrello.map(p => `<li>${p.nome} - €${p.prezzo}</li>`).join('') +
        '</ul>';
}

