 static String encryption(String s) {

        String st = s.replaceAll("\\s+", "");
        int l = st.length();
        char str[] = st.toCharArray();
        double rv = Math.sqrt((double) l);
        int fv = (int) Math.floor(rv);
        int cv = (int) Math.ceil(rv);
        int i, j, c, p = 0;
        if ((fv * cv) < l) {
            fv = fv + 1;
        }
