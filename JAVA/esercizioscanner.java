package eserciziojava;

import java.util.Scanner;

public class esercizioscanner {
	
	public static void main (String [] args) {
	Scanner scanner = new Scanner(System.in);
	
	System.out.println("Qual' è il tuo lavoro?");
	String lavoro = scanner.nextLine();
	
	System.out.println("Qual' è la tua situazione sentimentale?");
	String situazione = scanner.nextLine();
	
	System.out.println("Qual' è il tuo numero di matricola?");
	float matricola = scanner.nextFloat();
	scanner.nextLine();
	
	System.out.println("Qual' è il tuo numero di cellulare?");
	double cellulare = scanner.nextDouble();
	scanner.nextLine();
	
	System.out.println("Sei single?");
	boolean single = true;
	scanner.nextLine();

	System.out.println(" ruolo "  + lavoro );
	System.out.println(" numero di matricola "  + matricola +  " numero di cellulare " +  cellulare);
	System.out.println(" situazione " + single + " " );
	
	

	


 	
	}




}


