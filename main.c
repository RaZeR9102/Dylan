#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
using namespace std;
int main(int argc, char *argv[])
{
	int ncount = 0, ccount = 0, scount = 0, blank = 0, perscount, perblank, pericount, perelsecount, perforcount, perswcount, perccount, ifcount = 0, bcount = 0, perifcount, acount = 0, sccount = 0, elsecount = 0, swcount = 0, icount = 0, forcount = 0, peracount, persccount;
	char chars[200];
	char s1[] = "int";
	char s2[] = "long";
	char s3[] = "float";
	char s4[] = "double";
	char s5[] = "char";
	char s6[] = "if";
	char s7[] = "else";
	char s8[] = "for";
	char s9[] = "switch";
	char s10[] = ";";
	char s11[] = "/";
	char s12[] = "//";
	char s13[] = "strut";
	char s14[] = "[";
	char s15[] = "]";
	char s16[] = "{";
	char s17[] = "}";
	char s18[] = "\n";
	char s19[] = "\n";
	FILE *fp;

	printf("Enter file name: ");
    scanf("%s", chars);

    fp = fopen(chars, "r");


	if (fp == NULL)
	{
		perror("Error Occured");
	}
	else
	{
		fgets(chars, 199, fp);
		while (!feof(fp))
		{
			if (strstr(chars, s19))
			{
				ncount++;
				if (strstr(chars, s18))
				{
					fseek(fp, -1, 1);
					blank++;
				}
			}
			else if (strstr(chars, s11))
			{
				ccount++;
			}
			else if (strstr(chars, s12))
			{
				ccount++;
			}
			else if (strstr(chars, s1))
			{
				;
				ifcount++;
			}
			else if (strstr(chars, s2))
			{
				;
				ifcount++;
			}
			else if (strstr(chars, s3))
			{
				ifcount++;
			}
			else if (strstr(chars, s4))
			{
				ifcount++;
			}
			else if (strstr(chars, s5))
			{
				ifcount++;
			}
			else if (strstr(chars, s6))
			{
				icount++;
			}
			else if (strstr(chars, s7))
			{
				elsecount++;
			}
			else if (strstr(chars, s8))
			{
				forcount++;
			}
			else if (strstr(chars, s9))
			{
				swcount++;
			}
			else if (strstr(chars, s10))
			{
				sccount++;
			}
			else if (strstr(chars, s13))
			{
				scount++;
			}
			else if (strstr(chars, s14))
			{
				acount++;
			}
			else if (strstr(chars, s15))
			{
				acount++;
			}
			else if (strstr(chars, s16))
			{
				bcount = bcount;
				bcount++;
			}
			else if (strstr(chars, s17))
			{
				bcount = bcount;
				bcount++;
			}
			else if (strstr(chars, s18))
			{
				blank++;
			}
			blank = ncount - blank;
			perblank = blank / ncount;
            perccount = ccount / ncount;
			perifcount = ifcount / ncount;
			pericount = icount / ncount;
			perelsecount = elsecount / ncount;
			perforcount = forcount / ncount;
			perswcount = swcount / ncount;
			perscount = scount / ncount;
			persccount = sccount / ncount;
			peracount = acount / ncount;
		}
        fgets(chars, 199, fp);
	 }
	printf("\nThe Total number of lines is %d", ncount);

	printf("\nThe number of blank lines is %d and the percentage is %d", blank, perblank * 100);

	printf("\nThe number of Commented lines are %d and the percentage is %d", ccount, perccount * 100);

	printf("\nThe number of ints, longs, floats, doubles, and chars is %d and the percentage is %d", ifcount, perifcount);

	printf("\nThe number of if's is %d and the percentage is %d", icount, pericount * 100);

	printf("\nThe number of else's is %d and the percentage is %d", elsecount, perelsecount * 100);

	printf("\nThe number of for's is %d and the percentage is %d", forcount, perforcount * 100);

	printf("\nThe number of switches is %d and the percentage is %d", swcount, perswcount * 100);

	printf("\nThe number of Semicolons is %d and the percentage is %d", scount, perscount * 100);

	printf("\nThe number of structs is %d and the percentage is %d", sccount, persccount * 100);

	printf("\nThe number of arrays is %d and the percentage is %d", acount, peracount * 100);

	printf("\nThe number of blocks is %d", bcount);

	fclose(fp);

}
