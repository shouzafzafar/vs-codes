abstract class  Account{
    double interestRate;
    double amount;

    abstract double calculateInterest();
}
abstract class FDAccount extends Account{

    double interestRate;
    double amount;
    int noOfDays;
    int ageOfACHolder;

    double calculateInterest()
    {
        if(amount < 10000000){
            if (ageOfACHolder < 65)
            {
                if(noOfDays >=7 && noOfDays<=14) return 4.5;
                if(noOfDays >=15 && noOfDays<=29) return 4.75;
                if(noOfDays >=30 && noOfDays<=45) return 5.5;
                if(noOfDays >=45 && noOfDays<=60) return 7;
                if(noOfDays >=61 && noOfDays<=184) return 4.5;
                if(noOfDays >=185) return 4.5;

            }else{
                if(noOfDays >=7 && noOfDays<=14) return 4.5;
                if(noOfDays >=15 && noOfDays<=29) return 4.75;
                if(noOfDays >=30 && noOfDays<=45) return 5.5;
                if(noOfDays >=45 && noOfDays<=60) return 7;
                if(noOfDays >=61 && noOfDays<=184) return 4.5;
                if(noOfDays >=185) return 4.5;
            }
        }
        
    }
}

class SBAccount{

}

public class project2{

}