
#include <iostream>

using namespace std;
typedef double T;

struct Element{
	T value;
	Element* element;
};

struct Stack{
	Element* element;
};

Stack* createStack(){
	Stack* st = new Stack;
	st->element = NULL;
	return st;
}

using namespace std;

bool isEmpty(Stack* st){
	return st->element == NULL;
}

void push(Stack* st, T value){
	Element* el = new Element;
	el->value = value;
	el->element = st->element;
	st->element = el;
}

T pop(Stack* st){
	T value;
	if(isEmpty(st)){
		value = NULL;
		return value;
	}
	Element* el = st->element;
	value = el->value;
	st->element = el->element;
	delete el;
	return value;
}


double ONP(char* input){
	Stack* st = createStack();
	int i = 0;
	while(input[i]){
		if((input[i]>='0' && input[i]<='9') || (input[i]=='-' && input[i]>='0' && input[i]<='9')){

			bool minus = false;
			if(input[i]=='-'){
				minus = true;
				i++;
			}

			double a = 0;
			while(input[i]>='0' && input[i]<='9'){
				a *= 10;
				a += (input[i] - '0');
				i++;
			}

			if(minus)
				a *= -1;
			push(st, a);
		} else {
			double t1 = pop(st), t2 = pop(st);
			switch(input[i]){
				case '+':
					push(st, t2 + t1);
				break;
				case '-':
					push(st, t2 - t1);
				break;
				case '*':
					push(st, t2 * t1);
				break;
				case '/':
					push(st, t2 / t1);
				break;
			}
		}
		i++;
	}
	double wynik = pop(st);
	st = NULL;
	return wynik;
}

int main(){
	const int BUFFER_SIZE = 256;
	char* c = new char[BUFFER_SIZE];
	cin.getline(c, BUFFER_SIZE);
	cout << "Wynik dzialania to " << ONP(c);
	system("pause");
	return 0;
}
