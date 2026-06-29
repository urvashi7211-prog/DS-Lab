/*Design anagram game using array.  
 Allow a user to enter N words and store it in an array.  
 Generate a random number between 0 to N-1.  
 Based on the random number generated display the word stored at that 
index of an array and allow user to enter its anagram.  
 Check whether the word entered by the user is an anagram of displayed 
number or not and display an appropriate message.  
 Given a word A and word B. B is said to be an anagram of A if and only if the 
characters present in B is same as characters present in A, irrespective of 
their sequence. For ex: “LISTEN” == “SILENT” */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    int n;

    printf("Enter number of words : ");
    scanf("%d",&n);

    char words[n][50];

    for(int i=0;i<n;i++)
    {
        printf("Enter word %d : ",i+1);
        scanf("%s",words[i]);
    }

    int r = rand() % n;

    printf("Selected Word : %s\n",words[r]);

    char ans[50];

    printf("Enter its anagram : ");
    scanf("%s",ans);

    char w1[50],w2[50];

    strcpy(w1,words[r]);
    strcpy(w2,ans);

    int len1 = strlen(w1);
    int len2 = strlen(w2);

    if(len1 != len2)
    {
        printf("Not an Anagram");
        return;
    }

    for(int i=0;i<len1-1;i++)
    {
        for(int j=i+1;j<len1;j++)
        {
            if(w1[i] > w1[j])
            {
                char temp = w1[i];
                w1[i] = w1[j];
                w1[j] = temp;
            }
        }
    }

    for(int i=0;i<len2-1;i++)
    {
        for(int j=i+1;j<len2;j++)
        {
            if(w2[i] > w2[j])
            {
                char temp = w2[i];
                w2[i] = w2[j];
                w2[j] = temp;
            }
        }
    }

    if(strcmp(w1,w2)==0){
        printf("Anagram");
    }
    else{
        printf("Not an Anagram");
    }
}