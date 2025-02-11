import java.util.Scanner;

public class Practical5ins {

    // Function to encrypt the plaintext using the key
    public static String encrypt(String plaintext, String key) {
        StringBuilder ciphertext = new StringBuilder();
        int keyLength = key.length();
        key = key.toUpperCase();
        int keyIndex = 0;

        for (char ch : plaintext.toCharArray()) {
            if (Character.isLetter(ch)) {
                // Shift the character according to the key
                char shift = key.charAt(keyIndex % keyLength);
                char base = Character.isUpperCase(ch) ? 'A' : 'a'; // Maintain case
                char encryptedChar = (char) (((ch - base + (shift - 'A')) % 26) + base);
                ciphertext.append(encryptedChar);
                keyIndex++;
            } else {
                ciphertext.append(ch); // Keep non-letter characters unchanged
            }
        }
        return ciphertext.toString();
    }

    // Function to decrypt the ciphertext using the key
    public static String decrypt(String ciphertext, String key) {
        StringBuilder plaintext = new StringBuilder();
        int keyLength = key.length();
        key = key.toUpperCase();
        int keyIndex = 0;

        for (char ch : ciphertext.toCharArray()) {
            if (Character.isLetter(ch)) {
                // Shift the character according to the key
                char shift = key.charAt(keyIndex % keyLength);
                char base = Character.isUpperCase(ch) ? 'A' : 'a'; // Maintain case
                char decryptedChar = (char) (((ch - base - (shift - 'A') + 26) % 26) + base);
                plaintext.append(decryptedChar);
                keyIndex++;
            } else {
                plaintext.append(ch); // Keep non-letter characters unchanged
            }
        }
        return plaintext.toString();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Ask user for the choice
        System.out.println("Choose an option:");
        System.out.println("1. Encrypt");
        System.out.println("2. Decrypt");
        System.out.print("Enter your choice (1 or 2): ");

        // Fix Scanner issue
        int choice;
        if (scanner.hasNextInt()) {
            choice = scanner.nextInt();
        } else {
            System.out.println("Invalid input! Please enter 1 for encryption or 2 for decryption.");
            scanner.close();
            return;
        }

        scanner.nextLine(); // Consume the newline character

        // Input the text and key
        System.out.print("Enter text: ");
        String text = scanner.nextLine();
        System.out.print("Enter key: ");
        String key = scanner.nextLine();

        // Perform operation based on choice
        if (choice == 1) {
            String ciphertext = encrypt(text, key);
            System.out.println("Ciphertext: " + ciphertext);
        } else if (choice == 2) {
            String decryptedText = decrypt(text, key);
            System.out.println("Decrypted Text: " + decryptedText);
        } else {
            System.out.println("Invalid choice! Please enter 1 for encryption or 2 for decryption.");
        }

        scanner.close();
    }
}
