#include<iostram>

unsing namespace std;

public class Auto{

	private:
		
		int puertas;
		string color;
	
	
	public:
	
		void auto(int p, string c){
			puertas = p;
			color = c;
		}
	
		int getPuertas(){
			return puertas;
		}
		
		string getColor(){
			return color;
		}
		
};