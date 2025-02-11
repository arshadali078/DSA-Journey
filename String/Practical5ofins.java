import java.util.Scanner;

public class Practical5ofins {
    static int[][] keyMatrix;
    static int[][] inverseKeyMatrix;
    static int matrixSize;

    public static int charToNum(char c) {
        return c - 'A';
    }

    public static char numToChar(int num) {
        return (char) ((num % 26 + 26) % 26 + 'A'); // Ensure positive mod values
    }

    public static int[] multiplyMatrix(int[][] key, int[] text) {
        int[] result = new int[matrixSize];
        for (int i = 0; i < matrixSize; i++) {
            result[i] = 0;
            for (int j = 0; j < matrixSize; j++) {
                result[i] += key[i][j] * text[j];
            }
            result[i] = (result[i] % 26 + 26) % 26; // Ensure non-negative mod 26
        }
        return result;
    }

    public static int determinant(int[][] matrix) {
        if (matrixSize == 2) {
            return ((matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]) % 26 + 26) % 26;
        }
        return 0; // Only supports 2x2 for now
    }

    public static int modInverse(int num, int mod) {
        num = (num % mod + mod) % mod; // Ensure positive mod value
        for (int x = 1; x < mod; x++) {
            if ((num * x) % mod == 1) return x;
        }
        return -1; // Inverse does not exist
    }

    public static void computeInverseKey() {
        int det = determinant(keyMatrix);
        int detInverse = modInverse(det, 26);
        if (detInverse == -1) {
            System.out.println("Inverse matrix does not exist!");
            System.exit(0);
        }
        inverseKeyMatrix = new int[matrixSize][matrixSize];

        if (matrixSize == 2) {
            inverseKeyMatrix[0][0] = (keyMatrix[1][1] * detInverse) % 26;
            inverseKeyMatrix[0][1] = (-keyMatrix[0][1] * detInverse) % 26;
            inverseKeyMatrix[1][0] = (-keyMatrix[1][0] * detInverse) % 26;
            inverseKeyMatrix[1][1] = (keyMatrix[0][0] * detInverse) % 26;

            for (int i = 0; i < matrixSize; i++) {
                for (int j = 0; j < matrixSize; j++) {
                    inverseKeyMatrix[i][j] = (inverseKeyMatrix[i][j] + 26) % 26;
                }
            }
        }
    }

    public static String encrypt(String plaintext) {
        int[] textMatrix = new int[matrixSize];
        StringBuilder cipherText = new StringBuilder();

        for (int i = 0; i < plaintext.length(); i += matrixSize) {
            for (int j = 0; j < matrixSize; j++) {
                textMatrix[j] = charToNum(plaintext.charAt(i + j));
            }
            int[] cipherMatrix = multiplyMatrix(keyMatrix, textMatrix);
            for (int j = 0; j < matrixSize; j++) {
                cipherText.append(numToChar(cipherMatrix[j]));
            }
        }
        return cipherText.toString();
    }

    public static String decrypt(String ciphertext) {
        int[] textMatrix = new int[matrixSize];
        StringBuilder plainText = new StringBuilder();

        for (int i = 0; i < ciphertext.length(); i += matrixSize) {
            for (int j = 0; j < matrixSize; j++) {
                textMatrix[j] = charToNum(ciphertext.charAt(i + j));
            }
            int[] plainMatrix = multiplyMatrix(inverseKeyMatrix, textMatrix);
            for (int j = 0; j < matrixSize; j++) {
                plainText.append(numToChar(plainMatrix[j]));
            }
        }
        return plainText.toString();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter 1 for Encryption or 2 for Decryption: ");
        int choice = scanner.nextInt();
        scanner.nextLine(); // Consume newline

        System.out.print("Enter matrix size (2 only for now): ");
        matrixSize = scanner.nextInt();

        keyMatrix = new int[matrixSize][matrixSize];
        System.out.println("Enter key matrix:");
        for (int i = 0; i < matrixSize; i++) {
            for (int j = 0; j < matrixSize; j++) {
                keyMatrix[i][j] = scanner.nextInt();
            }
        }
        scanner.nextLine();

        if (choice == 1) {
            System.out.print("Enter message (uppercase, no spaces): ");
            String plaintext = scanner.nextLine();

            while (plaintext.length() % matrixSize != 0) {
                plaintext += "X"; // Padding if needed
            }
            String encryptedText = encrypt(plaintext);
            System.out.println("Encrypted Text: " + encryptedText);
        } else if (choice == 2) {
            System.out.print("Enter ciphertext (uppercase, no spaces): ");
            String ciphertext = scanner.nextLine();

            computeInverseKey();
            String decryptedText = decrypt(ciphertext);
            System.out.println("Decrypted Text: " + decryptedText);
        } else {
            System.out.println("Invalid choice! Enter 1 for encryption or 2 for decryption.");
        }

        scanner.close();
    }
}
