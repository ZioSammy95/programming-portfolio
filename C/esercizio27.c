int main() {
    int num1, num2;

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    printf("%s\n", !(num1 == num2) ? "I numeri sono diversi." : "I numeri sono uguali.");

    return 0;
}