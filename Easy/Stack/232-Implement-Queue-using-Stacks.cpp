        if(output.empty()){
    int peek() {
    
        output.pop();
    }
            while(input.size()){
                output.push(input.top()), input.pop();
            }
        }
        return output.top();
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
