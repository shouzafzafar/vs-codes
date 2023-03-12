import java.util.Scanner;

class InvalidPasswordException extends Exception {
    public InvalidPasswordException(String message) {
        super(message);
    }
}

// Main class
public class PasswordChecker {

    // Method to validate password
    public static void validatePassword(String password) throws InvalidPasswordException {
        // Check for space
        if (password.contains(" ")) {
            throw new InvalidPasswordException("Password should not contain any space");
        }
        // Check for length
        if (password.length() < 8 || password.length() > 15) {
            throw new InvalidPasswordException("Password length should be between 8 to 15 characters");
        }
        // Check for digit
        boolean hasDigit = false;
        for (char c : password.toCharArray()) {
            if (Character.isDigit(c)) {
                hasDigit = true;
                break;
            }
        }
        if (!hasDigit) {
            throw new InvalidPasswordException("Password should contain at least one digit");
        }
        // Check for lowercase
        boolean hasLowercase = false;
        for (char c : password.toCharArray()) {
            if (Character.isLowerCase(c)) {
                hasLowercase = true;
                break;
            }
        }
        if (!hasLowercase) {
            throw new InvalidPasswordException("Password should contain at least one lowercase letter");
        }
        
         // Check for uppercase
         boolean hasUppercase = false;
         for (char c : password.toCharArray()) {
             if (Character.isUpperCase(c)) {
                 hasUppercase = true;
                 break;
             }
         }
         if (!hasUppercase) {
             throw new InvalidPasswordException("Password should contain at least one uppercase letter");
         }

         // Check for special character
         boolean hasSpecial = false;
         String specialChars = "!@#$%^&*()-_=+[{]}\\|;:\'\",<.>/?`~";
         for (char c : password.toCharArray()) {
             if (specialChars.contains(Character.toString(c))) {
                 hasSpecial = true;
                 break;
             }
         }
         if (!hasSpecial) {
             throw new InvalidPasswordException("Password should contain at least one special character");
         }

    }

    // Main method
    public static void main(String[] args) {

       Scanner sc = new Scanner(System.in); 
       System.out.println("Enter your password: ");
       String password = sc.nextLine(); 
       sc.close();

       try { 
           validatePassword(password); 
           System.out.println("Valid Password"); 
       } catch(InvalidPasswordException e) { 
           System.out.println(e.getMessage()); 
       } 

    }

}