        output.pop();
        return val;
    
    int peek() {
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top()), input.pop();
            }
    }
        }
        return output.top();
    }
    
    bool empty() {
        return input.empty() && output.empty();
        const int val = peek();
    int pop() {
    }
    
