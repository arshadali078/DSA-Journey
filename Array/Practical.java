import java.util.Scanner;   
 
public class Practical {    
    public static final String ALPHABET = "abcdefghijklmnopqrstuvwxyz";    
       
    public static String encryptData(String inputStr, int shiftKey) {            inputStr = inputStr.toLowerCase();    
           
        String encryptStr = "";    
           
        for (int i = 0; i < inputStr.length(); i++) {    
            int pos = ALPHABET.indexOf(inputStr.charAt(i));    
                 
            int encryptPos = (shiftKey + pos) % 26;    
            char encryptChar = ALPHABET.charAt(encryptPos);    
 
            encryptStr += encryptChar;    
        }    
 
        return encryptStr;    
    }    
       
    public static String decryptData(String inputStr, int shiftKey) {            inputStr = inputStr.toLowerCase();    
           
        String decryptStr = "";    
           
        for (int i = 0; i < inputStr.length(); i++) {    
                
            int pos = ALPHABET.indexOf(inputStr.charAt(i));    
                 
            int decryptPos = (pos - shiftKey) % 26;    
                 
            if (decryptPos < 0) {    
                decryptPos = ALPHABET.length() + decryptPos;    
            }    
            char decryptChar = ALPHABET.charAt(decryptPos);    
               
            decryptStr += decryptChar;    
        }    
 
        return decryptStr;    
    }    
        
    public static void main(String[] args) {    
 
        Scanner sc = new Scanner(System.in);    
            
        System.out.println("Enter the string: ");    
        String inputStr = sc.nextLine();    
           
        System.out.println("Enter the shift key: ");            int shiftKey = Integer.valueOf(sc.nextLine());    
         
        System.out.println("Choose an option: ");            System.out.println("1. Encrypt the text");            System.out.println("2. Decrypt the text");    
        int choice = sc.nextInt();    
           
        switch (choice) {                case 1:    
                System.out.println("Encrypted Data ===> " + encryptData(inputStr, shiftKey));                    break;                case 2:    
                System.out.println("Decrypted Data ===> " + decryptData(inputStr, shiftKey));                    break;                default:    
                System.out.println("Invalid choice. Please select 1 or 2.");    
        }    
           
        sc.close();    
    }    
}    
