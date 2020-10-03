#include<stdio.h>
#include<string.h>

char queu[400];
int upper = 0;


void push(char x) {
    if (upper == 400) {
        return;
    } else {
        queu[++upper] = x;
    }
}

void pop() {
    if (upper == -1) {
        return;
    } else {
        printf("%c",queu[upper]);
        upper = upper - 1;
    }
}


int main() {

    int t, i = 0, j = 0;
    char a[400];
    	scanf("%lu", &t);

    for(int x=0;x<t;x++) {
        scanf("%s", &a);
        
        for (i = 0; i < strlen(a); i++) {
            if (a[i] == '+' || a[i] == '*' || a[i] == '-' || a[i] == '/' || a[i] == '^') {
                push(a[i]);
            } else if (a[i] == ')') {
                pop();
            } else if (a[i] == '(') {
                continue;
            } else {
                printf("%c", a[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
