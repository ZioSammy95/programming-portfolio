package eserciziojava;

public class whiledowhile {
	public static void main(String[]args) {
		int i = 0;
		while(i < 5) {
			System.out.println("while" + i);
			i++;
		}
		
		do {
			System.out.println("dowhile" + i);
			i++;
		} while(i < 0);
	
	}
}
