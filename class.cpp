class fraction{
private:
	int numerator;
	int denumerator;
public:
	fraction(int numerator,int denumerator){
		this-> numerator=numerator;
		this-> denumerator=denumerator;
	}
	int getnumerator()const{
		return numerator;
	}
	int getdenumerator()const{
		return denumerator;
	}
	void setnumerator(int n){
		numerator=n;
	}
	void setdenumerator(int d){
		denumerator=d;
	}
	void print(){
		cout<<this-> numerator<<"/"<< denumerator <<endl;
	}
void simplify(){
	int gcd=1;
	int j=min(this->numerator,this->denumerator);
	for(int i=0;i<j;i++){
		if(this->numerator%i==0&&this->denumerator%i==0){
			gcd=i;
		}
	}
	this->numerator=this->numerator/gcd;
	this->denumerator=this->denumerator/gcd;
}
fraction add(fraction const &f2){
	int lcm=denumerator*f2.denumerator;
     int x=lcm/denumerator;
     int y=lcm/f2.denumerator;
     int num=((x*numerator)+(y*f2.denumerator));
     fraction fenew(num,lcm);
     fenew.simplify();
     return fenew;
}
fraction operator+(fraction const &f2){
	int lcm=denumerator*f2.denumerator;
	int x=lcm/denumerator;
	int y=lcm/f2.denumerator;
	int num=((x*numerator)+(y*f2.denumerator));
	fraction fenew(num,lcm);
	fenew.simplify();
     return fenew;
}
fraction operator*(fraction const &f2){
int d=numerator*f2.numerator;
int n=denumerator*f2.denumerator;
fraction fenew(d,n);
fenew.simplify();
return fenew;
}
bool operator==(fraction const &f2){
	return (numerator==f2.numerator&&denumerator==f2.denumerator);
}
void multipy(fraction const &f2){
	numerator=numerator*f2.numerator;
	denumerator=denumerator*f2.denumerator;
	simplify();
}


};