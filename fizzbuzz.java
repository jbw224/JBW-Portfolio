// FizzBuzz in Java

public class FizzBuzz {
	
	public static void main(String[] args){
		
		for (int num = 1; num <= 100; num++)
		{
			if (num % 3 == 0 && num % 5 == 0)
				System.out.println("num = " + num + " FizzBuzz");
			else if (num % 3 == 0)
				System.out.println("num = " + num + " Fizz");
			else if (num % 5 == 0)
				System.out.println("num = " + num + " Buzz");
			else
				System.out.println("num = " + num);
		}
	
	}

}