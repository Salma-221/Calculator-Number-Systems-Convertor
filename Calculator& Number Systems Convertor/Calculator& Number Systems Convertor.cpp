#include <iostream>
using namespace std;
int main() {
    char option1, option2;
    do {
        cout << "1.transformation" << endl << "2.Addition" << endl << "3.Exit" << endl << "enter the number : ";
        cin >> option1;


        switch (option1) {
        case '1': {
            cout << "A. from decimal to binary" << endl << "B. from decimal to octal" << endl << "C. from decimal to hex" << endl
                << "D. from binary to decimal" << endl << "E. from binary to octal" << endl << "F. from binary to hex" << endl
                << "G. from octal to hex" << endl << "H. from octal to decimal" << endl << "I. from octal to binary" << endl
                << "J. from hex to octal" << endl << "K. from hex to binary" << endl << "L. from hex to decimal" << endl << "enter the letter : ";
            cin >> option2;
            switch (option2)
            {
            case 'a':
            case 'A': { //from decimal to binary
                long long dec1;
                char bin1[1000000];
                int a = 0;

                cout << "Enter the decimal number: ";


                if (!(cin >> dec1)) {
                    cout << "It is not an decimal number. please try again. " << endl;

                }

                else if (dec1 == 0) {
                    cout << "Binary of number is: 0" << endl;
                }
                else if (dec1 > 0) {

                    while (dec1 > 0) {
                        if (dec1 % 2 == 0)
                            bin1[a] = '0';
                        else
                            bin1[a] = '1';

                        dec1 = dec1 / 2;
                        a++;
                    }

                    cout << "Binary of number is: ";

                    for (int A = a - 1; A >= 0; A--) {
                        cout << bin1[A];
                    }

                    cout << endl;
                }
                break;
            }
            case 'b':
            case 'B': { //from decimal to octal
                long long dec2;
                int b = 0, B, oct2[100000];

                cout << "Enter a decimal number: ";
                if (!(cin >> dec2)) {
                    cout << "It is not an decimal number. please try again. " << endl;

                }

                else if (dec2 == 0) {
                    cout << "Octal of number is: 0" << endl;
                }
                else if (dec2 > 0) {

                    while (dec2 > 0)
                    {
                        oct2[b] = dec2 % 8;
                        dec2 /= 8;
                        b++;

                    }
                    cout << "Octal of number is: ";
                    for (B = b - 1;B >= 0;B--)
                        cout << oct2[B];
                    cout << endl;
                }

                break;
            }
            case 'c':
            case 'C': {//from decimal to hex
                long long dec3;
                int c = 0, C;
                char hex3[1000000];
                cout << "Enter a decimal number: ";
                if (!(cin >> dec3)) {
                    cout << "It is not an decimal number. please try again. " << endl;

                }

                else if (dec3 == 0) {
                    cout << "Hexadecimal of number is: 0" << endl;
                    return 0;
                }
                else if (dec3 > 0) {
                    while (dec3 > 0) {
                        if (dec3 % 16 == 0)
                            hex3[c] = '0';
                        else if (dec3 % 16 == 1)
                            hex3[c] = '1';
                        else if (dec3 % 16 == 2)
                            hex3[c] = '2';
                        else if (dec3 % 16 == 3)
                            hex3[c] = '3';
                        else if (dec3 % 16 == 4)
                            hex3[c] = '4';
                        else if (dec3 % 16 == 5)
                            hex3[c] = '5';
                        else if (dec3 % 16 == 6)
                            hex3[c] = '6';
                        else if (dec3 % 16 == 7)
                            hex3[c] = '7';
                        else if (dec3 % 16 == 8)
                            hex3[c] = '8';
                        else if (dec3 % 16 == 9)
                            hex3[c] = '9';
                        else if (dec3 % 16 == 10)
                            hex3[c] = 'A';
                        else if (dec3 % 16 == 11)
                            hex3[c] = 'B';
                        else if (dec3 % 16 == 12)
                            hex3[c] = 'C';
                        else if (dec3 % 16 == 13)
                            hex3[c] = 'D';
                        else if (dec3 % 16 == 14)
                            hex3[c] = 'E';
                        else if (dec3 % 16 == 15)
                            hex3[c] = 'F';
                        dec3 /= 16;
                        c++;
                    }
                    cout << "Hexadecimal of number is: ";
                    for (C = c - 1;C >= 0;C--) {
                        cout << hex3[C];
                    }
                    cout << endl;
                }
                break;
            }
            case 'd':
            case 'D': { //from binary to decimal
                long long dec4 = 0, base4 = 1;
                bool d4 = true;
                char bin4[1000000];
                for (int d = 0; d < 1000000; d++) {
                    bin4[d] = '*';
                }
                cout << "Enter the binary number:  ";
                cin >> bin4;


                for (int D = 1000000 - 1; D >= 0; D--) {
                    if (bin4[D] > '1') {
                        cout << "It is not a binary number. please try again.\n";
                        d4 = false;
                        break;
                    }

                    else if (bin4[D] == '1') {
                        dec4 += base4;
                        base4 *= 2;
                    }
                    else if (bin4[D] == '0')
                        base4 *= 2;
                }
                if (d4 == true) {
                    cout << "Decimal of number is: " << dec4 << endl;
                }
                break;
            }
            case 'e':
            case 'E': {//from binary to octal
                long long bin5, digit5, e = 0, b5;
                bool e5 = true;
                char oct5[1000000];

                cout << "Enter a binary number: ";

                cin >> bin5;
                b5 = bin5;
                while (b5 > 0) {
                    if ((b5 % 10) > 1) {
                        e5 = false;
                    }
                    b5 /= 10;
                }
                if (e5 == false)
                    cout << "THIS ISN'T A BINARY NUMBER, TRY AGAIN! ";
                else if (e5 == true) {
                    while (bin5 > 0) {
                        digit5 = bin5 % 1000;
                        switch (digit5) {
                        case 0000: oct5[e] = '0';
                            break;
                        case 1: oct5[e] = '1';
                            break;
                        case 10: oct5[e] = '2';
                            break;
                        case 11: oct5[e] = '3';
                            break;
                        case 100: oct5[e] = '4';
                            break;
                        case 101: oct5[e] = '5';
                            break;
                        case 110: oct5[e] = '6';
                            break;
                        case 111: oct5[e] = '7';
                            break;
                        }
                        bin5 = bin5 / 1000;
                        e++;
                    }
                    cout << "Octal of number is : ";

                    for (int E = e - 1;E >= 0;E--) {
                        cout << oct5[E];

                    }
                }
                cout << endl;
                break;
            }
            case 'f':
            case 'F': {//from binary to hex
                long long bin6, digit6, f = 0, b6;
                bool f6 = true;
                char hex6[1000000];

                cout << "Enter a binary number: ";

                cin >> bin6;
                b6 = bin6;
                while (b6 > 0) {
                    if ((b6 % 10) > 1) {
                        cout << "THIS ISN'T A BINARY NUMBER, TRY AGAIN! ";
                        f6 = false;
                        break;
                    }
                    b6 /= 10;
                }
                if (f6 == true) {
                    while (bin6 > 0) {
                        digit6 = bin6 % 10000;
                        switch (digit6) {
                        case 0000: hex6[f] = '0';
                            break;
                        case 1: hex6[f] = '1';
                            break;
                        case 10: hex6[f] = '2';
                            break;
                        case 11: hex6[f] = '3';
                            break;
                        case 100: hex6[f] = '4';
                            break;
                        case 101: hex6[f] = '5';
                            break;
                        case 110: hex6[f] = '6';
                            break;
                        case 111: hex6[f] = '7';
                            break;
                        case 1000: hex6[f] = '8';
                            break;
                        case 1001: hex6[f] = '9';
                            break;
                        case 1010: hex6[f] = 'A';
                            break;
                        case 1011: hex6[f] = 'B';
                            break;
                        case 1100: hex6[f] = 'C';
                            break;
                        case 1101: hex6[f] = 'D';
                            break;
                        case 1110: hex6[f] = 'E';
                            break;
                        case 1111: hex6[f] = 'F';
                            break;
                        }
                        bin6 = bin6 / 10000;
                        f++;
                    }
                    cout << "Hexadecimal of number is : ";

                    for (int F = f - 1;F >= 0;F--) {
                        cout << hex6[F];

                    }
                }
                cout << endl;
                break;
            }
            case 'g':
            case 'G': {//from octal to hex
                long long oct7, o7;
                bool g7 = true;
                long long base7 = 1, dec7 = 0;
                cout << "please enter an octal number : ";
                cin >> oct7;
                o7 = oct7;
                while (o7 > 0) {
                    if ((o7 % 10) > 7) {
                        cout << "It is not an octal number, please try again." << endl;
                        g7 = false;
                        break;
                    }
                    o7 /= 10;
                }
                if (g7 == true) {
                    while (oct7 > 0) {
                        dec7 += (oct7 % 10) * base7;
                        base7 *= 8;
                        oct7 /= 10;
                    }
                    int g = 0;
                    char hex7[100000];
                    while (dec7 > 0) {
                        if (dec7 % 16 == 0)
                            hex7[g] = '0';
                        else if (dec7 % 16 == 1)
                            hex7[g] = '1';
                        else if (dec7 % 16 == 2)
                            hex7[g] = '2';
                        else if (dec7 % 16 == 3)
                            hex7[g] = '3';
                        else if (dec7 % 16 == 4)
                            hex7[g] = '4';
                        else if (dec7 % 16 == 5)
                            hex7[g] = '5';
                        else if (dec7 % 16 == 6)
                            hex7[g] = '6';
                        else if (dec7 % 16 == 7)
                            hex7[g] = '7';
                        else if (dec7 % 16 == 8)
                            hex7[g] = '8';
                        else if (dec7 % 16 == 9)
                            hex7[g] = '9';
                        else if (dec7 % 16 == 10)
                            hex7[g] = 'A';
                        else if (dec7 % 16 == 11)
                            hex7[g] = 'B';
                        else if (dec7 % 16 == 12)
                            hex7[g] = 'C';
                        else if (dec7 % 16 == 13)
                            hex7[g] = 'D';
                        else if (dec7 % 16 == 14)
                            hex7[g] = 'E';
                        else if (dec7 % 16 == 15)
                            hex7[g] = 'F';
                        dec7 /= 16;
                        g++;
                    }
                    cout << "Hexadecimal of number is ";
                    for (int G = g - 1;G >= 0;G--) {
                        cout << hex7[G];
                    }
                }
                cout << endl;
                break;
            }
            case 'h':
            case 'H': {//from octal to decimal
                long long oct8, o8;
                bool h8 = true;
                long long base8 = 1, dec8 = 0;
                cout << "please enter an octal number : ";
                cin >> oct8;
                o8 = oct8;
                while (o8 > 0) {
                    if ((o8 % 10) > 7) {
                        cout << "It is not an octal number, please try again." << endl;
                        h8 = false;
                        break;
                    }
                    o8 /= 10;
                }
                if (h8 == true) {
                    while (oct8 > 0) {
                        dec8 += (oct8 % 10) * base8;
                        base8 *= 8;
                        oct8 /= 10;
                    }
                    cout << "Decimal of number is :" << dec8 << endl;
                }
                break;
            }
            case 'i':
            case 'I': {//from octal to binary
                char bin9[1000000];
                bool i9 = true;
                int i = 0;
                for (int I = 0; I < 1000000; I++) {
                    bin9[I] = '*';
                }
                cout << "Enter the octal number:  ";
                cin >> bin9;


                for (int ii = 1000000 - 1; ii >= 0; ii--) {
                    if (bin9[ii] > '7') {
                        cout << "It is not a octal number. please try again.\n";
                        i9 = false;
                        break;
                    }
                }

                if (i9 == true) {
                    cout << "Binary of number is : ";
                    while (i < 1000000) {
                        switch (bin9[i]) {
                        case '0': cout << "000";
                            break;
                        case '1': cout << "001";
                            break;
                        case '2': cout << "010";
                            break;
                        case '3': cout << "011";
                            break;
                        case '4': cout << "100";
                            break;
                        case '5': cout << "101";
                            break;
                        case '6': cout << "110";
                            break;
                        case '7': cout << "111";
                            break;
                        }
                        i++;
                    }
                    cout << endl;
                }

                break;
            }
            case 'j':
            case 'J': {//from hex to octal
                char hex10[100000];
                long long dec10 = 0, digit10;
                int base10 = 1;
                int j = 0, J, oct10[100000];
                bool j10 = true;
                for (int jj = 0; jj < 100000; jj++) {
                    hex10[jj] = '/';
                }
                cout << "Enter the hexadecimal number:";
                cin >> hex10;
                for (int jjj = 0; jjj < 100000; jjj++) {
                    if (((hex10[jjj] > '9') && (hex10[jjj] < 'A')) || ((hex10[jjj] > 'F') && (hex10[jjj] < 'a')) || (hex10[jjj] > 'f')) {
                        cout << "It is not a hexadecimal number. please try again.\n";
                        j10 = false;
                        break;
                    }
                }

                if (j10 == true) {
                    for (int l = 100000 - 1; l >= 0; l--) {
                        if (((char)(hex10[l]) >= 65) && (((char)(hex10[l]) <= 70)))
                            digit10 = ((char)(hex10[l])) - 55;
                        else if (((char)(hex10[l]) >= 97) && (((char)(hex10[l]) <= 102)))
                            digit10 = ((char)(hex10[l])) - 87;
                        else if (((char)(hex10[l]) >= 48) && (((char)(hex10[l]) <= 57)))
                            digit10 = ((char)(hex10[l])) - 48;
                        else
                            digit10 = 0;
                        dec10 += (digit10 * base10);
                        if ((((char)(hex10[l]) >= 65) && (((char)(hex10[l]) <= 70))) ||
                            (((char)(hex10[l]) >= 97) && (((char)(hex10[l]) <= 102))) ||
                            (((char)(hex10[l]) >= 48) && (((char)(hex10[l]) <= 57)))) {
                            base10 *= 16;
                        }
                    }

                    while (dec10 > 0) {
                        oct10[j] = dec10 % 8;
                        dec10 = dec10 / 8;
                        j++;

                    }
                    cout << "Octal of number is : ";
                    for (J = j - 1; J >= 0; J--)
                        cout << oct10[J];
                }
                cout << endl;
                break;
            }
            case 'k':
            case 'K': {//from hex to binary
                char hex11[1000000];
                bool k11 = true;
                int k = 0;
                for (int kk = 0; kk < 1000000; kk++) {
                    hex11[kk] = '/';
                }
                cout << "Enter the hexadecimal number:";
                cin >> hex11;
                for (int K = 0; K < 1000000; K++) {
                    if (((hex11[K] > '9') && (hex11[K] < 'A')) || ((hex11[K] > 'F') && (hex11[K] < 'a')) || (hex11[K] > 'f')) {
                        cout << "It is not a hexadecimal number. please try again.\n";
                        k11 = false;
                        break;
                    }
                }

                if (k11 == true) {
                    cout << "Binary of number is : ";
                    while (k < 1000000) {
                        switch (hex11[k]) {
                        case '0': cout << "0000";
                            break;
                        case '1': cout << "0001";
                            break;
                        case '2': cout << "0010";
                            break;
                        case '3': cout << "0011";
                            break;
                        case '4': cout << "0100";
                            break;
                        case '5': cout << "0101";
                            break;
                        case '6': cout << "0110";
                            break;
                        case '7': cout << "0111";
                            break;
                        case '8': cout << "1000";
                            break;
                        case '9': cout << "1001";
                            break;
                        case 'A':
                        case'a': cout << "1010";
                            break;
                        case 'B':
                        case 'b': cout << "1011";
                            break;
                        case 'C':
                        case 'c': cout << "1100";
                            break;
                        case 'D':
                        case'd': cout << "1101";
                            break;
                        case 'E':
                        case 'e': cout << "1110";
                            break;
                        case 'F':
                        case 'f':cout << "1111";
                            break;

                        }
                        k++;
                    }
                }
                cout << endl;
                break;
            }
            case 'l':
            case 'L': {//from hex to decimal
                char hex12[1000000];
                bool l12 = true;
                long long dec12 = 0, digit12;
                int base12 = 1;
                for (int L = 0; L < 1000000; L++) {
                    hex12[L] = '/';
                }
                cout << "Enter the hexadecimal number:";
                cin >> hex12;
                for (int ll = 0; ll < 1000000; ll++) {
                    if (((hex12[ll] > '9') && (hex12[ll] < 'A')) || ((hex12[ll] > 'F') && (hex12[ll] < 'a')) || (hex12[ll] > 'f')) {
                        cout << "It is not a hexadecimal number. please try again.\n";
                        l12 = false;
                        break;
                    }
                }

                if (l12 == true) {
                    for (int l = 1000000 - 1;l >= 0;l--) {
                        if (((char)(hex12[l]) >= 65) && (((char)(hex12[l]) <= 70)))
                            digit12 = ((char)(hex12[l])) - 55;
                        else if (((char)(hex12[l]) >= 97) && (((char)(hex12[l]) <= 102)))
                            digit12 = ((char)(hex12[l])) - 87;
                        else if (((char)(hex12[l]) >= 48) && (((char)(hex12[l]) <= 57)))
                            digit12 = ((char)(hex12[l])) - 48;
                        else
                            digit12 = 0;
                        dec12 += (digit12 * base12);
                        if ((((char)(hex12[l]) >= 65) && (((char)(hex12[l]) <= 70))) || (((char)(hex12[l]) >= 97) && (((char)(hex12[l]) <= 102))) || (((char)(hex12[l]) >= 48) && (((char)(hex12[l]) <= 57))))
                        {
                            base12 *= 16;
                        }
                    }
                    cout << "Decimal of the number is : " << dec12;
                }
                cout << endl;
                break;
            }
            default: cout << "invalid option, please try again " << endl;
            }


            break;
        }
        case '2': {      //addition
            long long binary1, binary2;
            long long BINARY1, BINARY2;
            bool zzz = true;
            cout << "Enter first binary number: ";
            cin >> binary1;
            cout << "Enter second binary number: ";
            cin >> binary2;
            int carry = 0;
            long long result = 0;
            int digitPosition = 1;

            BINARY1 = binary1;
            BINARY2 = binary2;
            for (int z = 1000000 - 1; z >= 0; z--) {
                if ((BINARY1 % 10) > 1) {
                    cout << "The first is not a binary number. please try again.\n";
                    zzz = false;
                    break;
                }
                if ((BINARY2 % 10) > 1) {
                    cout << "The second is not a binary number. please try again.\n";
                    zzz = false;
                    break;
                }
                BINARY1 /= 10;
                BINARY2 /= 10;
            }
            if (zzz == true) {
                while (binary1 != 0 || binary2 != 0 || carry != 0) {
                    int bit1 = binary1 % 10;
                    int bit2 = binary2 % 10;
                    int sum = bit1 + bit2 + carry;
                    carry = sum / 2;
                    sum %= 2;
                    result += sum * digitPosition;
                    digitPosition *= 10;
                    binary1 /= 10;
                    binary2 /= 10;
                }
                cout << "Binary sum: " << result << endl;
            }
            break;
        }
        case '3':break;
        default: cout << "invalid option, please try again " << endl;
        }

    } while (option1 != '3');//to end the program

    return 0;
}