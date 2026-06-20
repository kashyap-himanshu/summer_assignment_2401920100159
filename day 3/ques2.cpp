class MinStack {
public:
stack<int> s;
stack<int> minst;
    MinStack() {
        
    }
    
    void push(int value) {
        
        s.push(value);
        if( minst.empty() || minst.top()>=value){
            minst.push(value);
        }
    }
    
    void pop() {
        if(minst.top()==s.top()){
            minst.pop();
        }
        s.pop();
        
    }
    
    int top() {
        return s.top();
        
    }
    
    int getMin() {
      return  minst.top();
        
    }
   
};

