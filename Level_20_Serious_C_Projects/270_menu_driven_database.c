#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int id;
    char name[50];
}
Record;
int main(void) {
    Record*a=NULL;
    size_t n=0,cap=0;
    int ch;
    do {
        printf("\\n1 Add 2 List 3 Search 4 Delete 5 Save 6 Load 7 Exit\\n");
        if(scanf("%d",&ch)!=1)break;
        if(ch==1) {
            Record r;
            scanf("%d%49s",&r.id,r.name);
            if(n==cap) {
                size_t c=cap?cap*2:8;
                Record*p=realloc(a,c*sizeof *a);
                if(!p)continue;
                a=p;
                cap=c;
            }
            a[n++]=r;
        }
        else if(ch==2)for(size_t i=0; i<n; i++)printf("%d %s\n",a[i].id,a[i].name);
        else if(ch==3) {
            int id,found=0;
            scanf("%d",&id);
            for(size_t i=0; i<n; i++)if(a[i].id==id)printf("%d %s\n",a[i].id,a[i].name),found=1;
            if(!found)puts("Not found");
        }
        else if(ch==4) {
            int id;
            scanf("%d",&id);
            for(size_t i=0; i<n; i++)if(a[i].id==id) {
                for(size_t j=i; j+1<n; j++)a[j]=a[j+1];
                n--;
                break;
            }
        }
        else if(ch==5) {
            FILE*f=fopen("records.txt","w");
            if(f) {
                for(size_t i=0; i<n; i++)fprintf(f,"%d %s\n",a[i].id,a[i].name);
                fclose(f);
            }
        }
        else if(ch==6) {
            FILE*f=fopen("records.txt","r");
            if(f) {
                n=0;
                Record r;
                while(fscanf(f,"%d%49s",&r.id,r.name)==2) {
                    if(n==cap) {
                        size_t c=cap?cap*2:8;
                        Record*p=realloc(a,c*sizeof *a);
                        if(!p)break;
                        a=p;
                        cap=c;
                    }
                    a[n++]=r;
                }
                fclose(f);
            }
        }
    }
    while(ch!=7);
    free(a);
    return 0;
}
