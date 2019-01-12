// Complete the catAndMouse function below.
    static String catAndMouse(int x, int y, int z) 
    {
            if( (Math.abs(z-y)) < (Math.abs(z-x)) )
            return "Cat B";
            else if( (Math.abs(z-y)) > (Math.abs(z-x)) )
            return "Cat A";
            else
            return "Mouse C";
    }
