class Node
    attr_accessor : data, :next_node
    def initialize(data)
        @data = data
    end
end

class LinkedList
    attr_accessor : first_node

    def initialize(first_node)
        @first_node = first_node
    end

    def read(index)
        current_node = first_node
        current_index = 0 
        while (current_index<index) do
            current_node = current_node.next_node
            current_index+=1
            # cannot find value in the list then return nil or else return node 
            return nil unless current_node\
        end
        return current_node.data
    end

    def index_of(value)
        current_node = first_node
        current_index =0 
        begin 
            # return if we find the data. 
            if current_node.data ==value
                return current_index
            end
#           move to the next node
            current_node = current_node.next_node
            current_index +=1
        end while current_node
        return nil 
    end

    def insert_at_index(index,value)
        new_node = Node.new(value)
        if(index==0) #for ffirst node intesertion . 
            new_node.next_node = first_node
            self.first_node = new_node; 
            return 
        end

        current_node = first_node
        current_index = 0
        #access node immediately before where the new node will go : 
        while (current_index< (index-1)) do 
            current_node = current_node.next_node 
            current_index+=1
        end
        # link new node to the next node
        new_node.next_node = current_node.next_node
        #modify previous node link 
        current_node.next_node = new_node
    end

    def delete_at_index(index)
        if index==0
            self.first_node = first_node.next_node
            return
        end

        current_node = first_node
        current_index = 0 
        while current_index<(index-1) do 
            current_node = current_node.next_node 
            current_index +=1
        end
        node_after_deleted_node = current_node.next_node.next_node
        current_node.next_node = node_after_deleted_node
    end

end




node_1 = Node.new("once");
node_2 = Node.new("upon");
node_3 = Node.new("a");
node_4 = Node.new("time");

node_1.next = node_2;
node_2.next = node_3; 
node_3.next = node_4; 

list = LinkedList.new(node_1)
list.read(3)
list.index_of("time")
list.insert_at_index(3,"TIME")