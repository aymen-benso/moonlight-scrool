#include"stdio.h"
#include"stdlib.h"
#include"math.h"

typedef struct maillon {
    int v;
    maillon* suiv;
}maillon;
typedef maillon *liste;
void inserer(liste *l,i;int v){
  liste q;
  if(*l==NULL){
    *l=malloc(sizeof(maillon));
    (*l).v=v;
    (*l).suiv=NULL;
  }
  else{
    q=*l;
    while(q.suiv!=NULL){q=q.suiv;}  p=malloc(sizeof(maillon));
    p.v=v;
    p.suiv=NULL; q.suiv=p;
  }

}
void delete(liste *l){
    liste q,p=*l;
while(p.suiv!=NULL){
if(p.v==p.suiv.v){
    q=p.suiv;
    p.suiv=q.suiv;
    q=NULL;
}else{p=p.suiv;}


}

}


int main{
liste p,d;

p=malloc(sizeof(maillon));
p.suiv=null;    
l=p;
l.v=1;

d=malloc(sizeof(maillon));    
d.v=1;
d.suiv=NULL;
l.suiv=d;
l=d;
d=malloc(sizeof(maillon));    
d.v=1;
d.suiv=NULL;
l.suiv=d;


}
