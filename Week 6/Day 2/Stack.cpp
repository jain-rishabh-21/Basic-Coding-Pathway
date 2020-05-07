#include <climits>


class StackUsingArray {
	int *data;
	int nextIndex;
	int capacity;	

	public :

	StackUsingArray(int capacity) {
		this->capacity=capacity;
        data = new int[this->capacity];
        nextIndex=0;
	}

	// return the number of elements present in my stack
	int size() {
		return nextIndex;
	}

	bool isEmpty() {
		if(nextIndex==0)
            return true;
        else 
            return false;
	}

	// insert element
	void push(int element) {
        if(nextIndex>capacity)
            return;
        else
        data[nextIndex]=element;
        nextIndex++;
	}

	// delete element
	int pop() {
		if( isEmpty() ){
            cout<<"Stack Is Empty";
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];	
    }

	int top() {
		if( isEmpty() ){
            cout<<"Stack Is Empty";
            return INT_MIN;
        }
        else
            return data[nextIndex-1];
	}
};
