#include <stdio.h>
#include <string.h>

#define MAX 150

int issuvojit(char* s){
    char str[] = "SUVOJIT";
    int n = strlen(str);
    int ans = 1;

    for(int i = 0 ; i < n - 1 ; i++)
    {
    	if(s[i] == '\0'){
    		ans = 0;
    		break;
    	}
    	if(s[i] != str[i]){
    		ans = 0;
    		break;
    	}
    }
    return ans;
}

int issuvo(char* s)
{
    char str[] = "SUVO";
    int n = strlen(str);
    int ans = 1;
    for(int i = 0 ; i < n - 1 ; i++)
    {
    	if(s[i] == '\0'){
    		ans = 0;
    		break;
    	}
    	if(s[i] != str[i]){
    		ans = 0;
    		break;
    	}
    }
    return ans;
}
int main()
{
	int t;
	scanf("%d", &t);

	while(t--){
	    fflush(stdin);
		char s[MAX];
		scanf("%s", s);
		//fgets(s, MAX, stdin);
		fflush(stdin);
		int len = strlen(s);
	    int s1 = 0, s2 = 0;
	    for(int i = 0 ; i < len - 1 ; i++)
	    {
	    	if(s[i] == 'S'){
	    		if(issuvojit(s + i)) s1++;
	    		else if(issuvo(s + i)) s2++;
	    	}
	    }
	    printf("SUVO = %d, SUVOJIT = %d",s2, s1);
	    printf("\n");
	}
    
}
