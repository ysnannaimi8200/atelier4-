#include<iostream>
#include<math.h>
using namespace std;
class Complexe{
	private:
		double x ;
		double y; 
	public: 
	Complexe (double,double);
	void affiche(); 
	Complexe operator+(Complexe&);
	Complexe operator-(Complexe&);
	Complexe operator*(Complexe&);
	Complexe operator/(Complexe&);	
};
Complexe::Complexe(double reel, double imaginaire ){
	x=reel ;
	y=imaginaire ;}
void Complexe::affiche(){
	cout<<"le reel de votre nbr est : " <<x<<endl;
	cout<<"limg de votre nbr est : " <<y<<endl;
}
Complexe Complexe::operator+(Complexe& objet1){
	Complexe objet2(0,0);
	objet2.x=objet1.x+x;
	objet2.y=objet1.y+y;
	return objet2;
}
Complexe Complexe::operator-(Complexe& objet1){
	Complexe objet2(0,0);
	objet2.x=objet1.x-x;
	objet2.y=objet1.y-y;
	return objet2;
}
Complexe Complexe::operator*(Complexe& objet1){
	Complexe objet2(0,0);
	objet2.x=x*objet1.x-y*objet1.y;
	objet2.y=y*objet1.x+x*objet1.y;
	return objet2;
}
Complexe Complexe::operator/(Complexe& objet1){
	Complexe objet2(0,0);
	objet2.x=(x*objet1.x+y*objet1.y)/(pow(objet1.x,2)+pow(objet1.y,2));
	objet2.y=(y*objet1.x-x*objet1.y)/(pow(objet1.x,2)+pow(objet1.y,2));
	return objet2;}
int main() {
	Complexe zedge(2,4);
	zedge.affiche();
	Complexe ball(3,5);
	ball.affiche();
	Complexe resultat(0,0);//resultat=zedge+ball;
    resultat=zedge.operator+(ball);
    resultat.affiche();
	resultat=zedge-ball;
    resultat.affiche();
	resultat=zedge*ball;
    resultat.affiche();
	resultat=zedge/ball;
    resultat.affiche();
	return 0;}
