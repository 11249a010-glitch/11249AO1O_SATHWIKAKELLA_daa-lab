#include <stdio.h>
int main() {
int n, c, i, j,bins = 0;
int item[20], bin[20] = {0};
printf("NO OF ITEMS:");
scanf("%d", &n);
printf("bin capacity:");
scanf("%d", &c); 

for (i = 0; i < n; i++)
scanf("%d", &item[i]);

for (i = 0; i < n; i++) {
for (j = 0; j < bins; j++) {
if (bin[j] + item[i] <= c) {
bin[j] += item[i];
break;
}
}
if (j == bins) {
bin[bins] = item[i];
bins++;
}
}

printf("bin packing:%d", bins);
return 0;
}
