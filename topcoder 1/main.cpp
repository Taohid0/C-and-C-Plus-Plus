#include<bits/stdc++.h>

using namespace std;

public class Quipu {
    public final static char X = 'X';
    public final static char M = '-';



    public static int readKnots(String knots) {
        StringBuilder sb = new StringBuilder();
        int x = 0;
        int minus = 0;
        int len = knots.length();
        boolean currentX = true;
        char ch;
        for (int i = 1; i < len - 1; i++) {
            ch = knots.charAt(i);
            if (currentX) {
                if (ch == X) {
                    x++;
                    if (i == len - 2) {
                        sb.append(x);
                    }
                } else {
                    minus++;
                    sb.append(x);
                    if (i == len - 2) {
                        for (int k = 0; k < minus; k++)
                            sb.append('0');
                    }
                    x = 0;
                    currentX = false;
                }
            } else {
                if (ch == M) {
                    minus++;
                    if (i == len - 2) {
                        for (int k = 0; k < minus; k++)
                            sb.append('0');
                    }

                } else {
                    x++;
                    currentX = true;
                    if (i == len - 2) {
                        sb.append(x);

                    }

                    if (minus > 1) {
                        for (int k = 0; k < minus - 1; k++)
                            sb.append('0');

                    }
                    minus = 0;
                }
            }

        }
        return Integer.parseInt(sb.toString());
    }
}
