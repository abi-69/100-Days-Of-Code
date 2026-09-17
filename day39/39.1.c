#include <stdio.h>
/* Q77: Check whether diagonal elements are distinct. */
int main(void) { int n,a[100][100],ok=1; scanf("%d",&n); for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]); for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(a[i][i]==a[j][j])ok=0; printf("%s\n",ok?"Distinct":"Not Distinct"); return 0; }
