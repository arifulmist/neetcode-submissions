class MyHashSet {
    vector<int>d;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(find(d.begin(),d.end(),key)==d.end())
        {
            d.push_back(key);
        }
    }
    
    void remove(int key) {
        auto it=find(d.begin(),d.end(),key);
         if(it!=d.end())
        {
            d.erase(it);
        }
    }
    
    bool contains(int key) {
        return find(d.begin(),d.end(),key)!=d.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */