public class Cel_fahkel{
    public static void main(String[] args){
        System.out.println("Você deseja converter o valor para Fahrenheit (1) ou Kelvin (2)?");
        int opcao;
        float valor;
        while(true){
            try{
                opcao = Integer.parseInt(System.console().readLine());
                if(opcao != 1 && opcao != 2){
                    throw new NumberFormatException();
                } else{
                    System.out.print("Insira o valor em celsius: ");
                    while(true){
                        try{
                            valor = Float.parseFloat(System.console().readLine());
                            if(opcao == 1){
                                System.out.print("Valor em Fahrenheit: ");
                                System.out.print((valor*1.8)+32);
                                break;
                            } else{
                                System.out.print("Valor em Kelvin: ");
                                System.out.print(valor+273.15);
                                break;
                            }
                        }catch(NumberFormatException e){
                            System.out.println("Valor inválido");
                            System.out.print("Insira o valor em celsius: ");
                        }
                    }
                    break;
                }
            }catch(NumberFormatException e){
                System.out.println("Valor inválido.");
            }
        }
        
    }
}
