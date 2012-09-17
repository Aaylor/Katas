public class FizzBuzz{

    public static boolean hasNumber(int i, int number){

        while ( i >= number ){

            if ( (i == number) || ( i%10 == number ) ) return true;
            i /= 10;

        }

        return false;

    }

    public static void fizzBuzz(){

        for (int i = 1; i <= 100; i++){

            String s = "";
            if ( i % 3 == 0 || hasNumber(i,3) )
                s += "Fizz";

            if ( i % 5 == 0 || hasNumber(i,5) )
                s += "Buzz";

            if ( s.equals("") )
                System.out.println(i);
            else
                System.out.println(s);

        }

    }

    public static void fizzBuzzRec(int i){

        String s = "";
        if ( (i % 3 == 0) || hasNumber(i,3) )
            s += "Fizz";

        if ( (i % 5 == 0) || hasNumber(i,5) )
            s += "Buzz";

        if ( i != 1 ) fizzBuzzRec(i-1);

        if ( s.equals("") )
            System.out.println(i);
        else
            System.out.println(s);

    }

    public static void main(String[] args){

        fizzBuzz(100);
        fizzBuzzRec(100);

    }

}

