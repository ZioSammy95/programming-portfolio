﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Interfacce    
{
    class InsegnanteBallo : Insegnante
    {
        public string canzonePreferita;
        public InsegnanteBallo(string nome, string cognome, string materia, string canzonePreferita) : base(nome, cognome, materia)
        {
            this.canzonePreferita = canzonePreferita;
        }


    }

}

