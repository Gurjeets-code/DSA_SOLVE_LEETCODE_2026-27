class MyLinkedList {
    struct node {
        int data;
        node* next;
        node(int val) {
            data = val;
            next = nullptr;
        }
    };

    node* head;

public:
    MyLinkedList() {
        head = nullptr;
    }
    
    int get(int index) {
        int count = 0;
        node* temp = head;
        while (temp != nullptr) {
            if (count == index) {
                return temp->data;
            }
            temp = temp->next;
            count++;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        node* temp = new node(val);
        if (head == nullptr) {
            head = temp;
        } else {
            temp->next = head;
            head = temp;
        }
    }
    
    void addAtTail(int val) {
        node* temp = new node(val);
        node* start = head;

        if (head == nullptr) {
            head = temp;
            return;
        }
        while (start->next != nullptr) {
            start = start->next;
        }
        start->next = temp;
    }
    
    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }
        node* temp = new node(val);
        int count = 0;
        node* start = head;
        while (start != nullptr) {
            if (count == index - 1) {
                temp->next = start->next;
                start->next = temp;  
                return; 
            }
            count++;
            start = start->next;
        }
    }
    
    void deleteAtIndex(int index) {
        if (head == nullptr) {
            return;
        }

        if (index == 0) {
            node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        int count = 0;
        node* start = head;
        while (start != nullptr && start->next != nullptr) {
            if (count == index - 1) {
                node* toDelete = start->next;
                start->next = start->next->next;
                delete toDelete;
                return;
            }
            count++;
            start = start->next;
        }
    }
};
