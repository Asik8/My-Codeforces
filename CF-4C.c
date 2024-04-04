#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct Node
{
    char c[32];
    struct Node *next;
};
typedef struct Node node;
node *head = NULL;

void insertFirst()
{
    char n[32];
    scanf("%s",n);

    node *newNode = (node *)malloc(sizeof(node));
    node *newNode->c = n;
    newNode->next = head;
    head = newNode;
}


int main()
{
    long long int a;
    scanf("%lld",&a);

    for(long long int i=0;i<a;i++)
    {

    }

    return 0;
}