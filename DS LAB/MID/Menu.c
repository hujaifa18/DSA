#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int Strlen(char *str)
{
    int l = 0;
    while (str[l])
    {
        l++;
    }
    return l;
}

char *SubString(char *str, int st, int nofc)
{
    int i = 0;
    char *sub = (char *)malloc(nofc);
    if (st + nofc > Strlen(str))
    {
        sub = "";
    }
    else
    {
        while (nofc > 0)
        {
            sub[i] = str[st + i];
            i++;
            nofc--;
        }

        sub[i] = '\0';
    }
    return sub;
}
char *concate(char *str1,char *str2)
{
    int i,l1,l2;
    l1=Strlen(str1);
    l2=Strlen(str2);
    char *con=(char *)malloc(l1+l2);
    for(i=0;i<l1;i++)
    {
        con[i]=str1[i];
    }
    for(i=0;i<l2;i++)
    {
        con[l1+i]=str2[i];
    }
    con[l1+l2]='\0';
    return con;
}
int Index(char *str,char *pat)
{
    int R=Strlen(pat);
    int S=Strlen(str);
    int L,k=0,max=S-R+1;
    while (k<=max)
    {
        for(L=0;L<R;L++)
        {
            if(pat[L]!=str[k+L])
            goto s5;
        }
        return k;
        s5: k=k+1;
    }
    return -1;
}
char *Insert(char *str,int in,char *pat)
{
    int i=0,j=0,k=0;
    int l1=Strlen(str);
    int l2=Strlen(pat);
    char *insert=(char *)malloc(l1+l2);
    while(i<in )
    {
        insert[k]=str[i];
        i++;
        k++;
    }
    while(pat[j]!='\0')
    {
        insert[k]=pat[j];
        k++;
        j++;
    }
    while(str[i]!='\0')
    {
        insert[k]=str[i];
        k++;
        i++;
    }
    insert[l1+l2]='\0';
    return insert;
}
char *Replace(char *str,char *pat,char *tar)
{
    int i = 0, j = 0, k = 0;
    int l1 = Strlen(str);
    int l2 = Strlen(pat);
    int l3 = Strlen(tar);
    char* replace = (char*)malloc(l1 + (l3 - l2) * (l1 / l2) + 1);
    if (!replace) return NULL;
    int replace_index = 0;
    while (i < l1) {
        if (str[i] == pat[j]) {
            while (j < l2 && i < l1 && str[i] == pat[j]) {
                i++;
                j++;
            }
            if (j == l2) {
                for (k = 0; k < l3; k++) {
                    replace[replace_index++] = tar[k];
                }
                j = 0;
            } else {
                for (k = 0; k < j; k++) {
                    replace[replace_index++] = pat[k];
                }
                replace[replace_index++] = str[i - j];
                j = 0; 
            }
        }
            else {
            replace[replace_index++] = str[i++];
        }
    }
    replace[replace_index] = '\0';
    return replace;
}
char *Delete(char *str,int in,int nofc)
{
    int i=0,j=0;
    int l=Strlen(str)-nofc;
    char *new_str=(char *)malloc(l);
    while(i<in)
    {
        new_str[j]=str[i];
        i++;
        j++;
    }
    if(nofc>0)
    {
        i+=nofc;
    }
    while(str[i]!='\0')
    {
        new_str[j]=str[i];
        i++;
        j++;
    }
    new_str[l]='\0';
    return new_str;
}
void main()
{
    char op;
    int st, nofc,Loc,in;
    char Str1[100], Str2[100], *Sub,Str3[100];
    while (1)
    {
        printf("\n1. Input a String\n");
        printf("2. Length of the String\n");
        printf("3. Display the String\n");
        printf("4. Sub-string of the String\n");
        printf("5. Concatenation of two String\n");
        printf("6. Index\n");
        printf("7. Insert a string to another String\n");
        printf("8. Delete a part of string\n");
        printf("9. Replace a part with another in a string\n");
        printf("0. Exit\nEnter your option : ");
        op = getche();
        switch (op)
        {
        case '1':
            printf("\nEnter a line of text string:\n");
            gets(Str1);
            break;
        case '2':
            printf("\nThe length of the string is %d", Strlen(Str1));
            break;
        case '3':
            printf("\nInputted Sting is :\n");
            puts(Str1);
            break;
        case '4':
            printf("\nEnter starting : ");
            scanf("%d", &st);
            printf("\nEnter No of Character : ");
            scanf("%d", &nofc);
            Sub = SubString(Str1, st, nofc);
            printf("\nThe Substring is\n");
            puts(Sub);
            break;
        case '5':
            printf("\nEnter second string : \n");
            gets(Str2);
            printf("\n Concatention of string: \n");
            puts(concate(Str1, Str2));
            break;
        case '6':
            printf("\n Enter Pattern String : \n");
            gets(Str2);
            Loc=Index(Str1,Str2);
            if(Loc>=0)
               printf("\nPattern Found in Location %d\n",Loc);
               else
               printf("\nPattern not Found\n");
        case '7':
        {
            printf("\nEnter a Patten String : \n");
            gets(Str2);
            printf("\nEnter index from where we start : \n");
            scanf("%d",&in);
            printf("\nAfter inserting : \n");
            puts(Insert(Str1,in,Str2));
        }
        case '8':
        {
            printf("\nEnter a String : \n");
            gets(Str1);
            printf("\nFrom where you delete : \n");
            scanf("%d",&in);
            printf("\nEnter how many char you delete : \n");
            scanf("%d",&nofc);
            printf("\nRequired String is : ");
            puts(Delete(Str1,in,nofc));
        }
        case '9':
        {
            printf("\nEnter a String : \n");
            gets(Str1);
            printf("\nEnter a Pattern String : \n");
            gets(Str2);
            printf("\nEnter a Target String : \n");
            gets(Str3);
            printf("\nAfter Replacing : \n");
            puts(Replace(Str1,Str2,Str3));
        }
        case '0':
            exit(0);
            break;
        }
    }
}