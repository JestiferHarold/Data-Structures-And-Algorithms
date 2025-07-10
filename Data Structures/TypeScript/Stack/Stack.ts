class NewNode{ 

    private value: number;
    private nextNode: NewNode | null;

    constructor (value: number, nextNode: NewNode | null) {
        this.value = value;
        this.nextNode = nextNode;
    }

    getValue() : number {
        return this.value;
    }

    getNextNode() : NewNode | null {
        return this.nextNode;
    }

    setNextNode(nextNode: NewNode | null): void {
        this.nextNode = nextNode;
    }
}

class Stack {
    private head: NewNode | null;
    private size: number;

    constructor (head: NewNode | null) {
        this.head = head;
        this.size = 0;
    } 

    getHead(): NewNode | null {return this.head;}

    getSize(): number {return this.size;}

    push(node: NewNode): void {
        node.setNextNode(this.head);
        this.head = node;
    }    

    pop(): NewNode {
        if (this.head == null) {
            throw Error("Stack UnderFlow Error");
        }

        let poppedNode: NewNode = this.head;
        this.head = this.head.getNextNode();
        return poppedNode;
    }

    top(): NewNode {
        if (this.head == null) {
            throw Error("Stack UnderFlow Error");
        }

        return this.head;
    }
}