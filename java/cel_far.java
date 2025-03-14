import java.util.Scanner;
public class cel_far{
    public static void main(String[] args){
        Scanner reader = new Scanner(System.in);
        System.out.print("Escreva a temperatura em Celcius: ");
        float celcius = 0;
        while(Math.PI==Math.PI){
            try{
                celcius = Integer.parseInt(reader.nextLine());
                break;
            } catch(NumberFormatException e){
                System.out.println("Escreva um valor inteiro ou decimal");
            }
        }
        System.out.println("O valor em Fahrenheit é: " + (float)((celcius*1.8) +32) + "°F");
    }
}
