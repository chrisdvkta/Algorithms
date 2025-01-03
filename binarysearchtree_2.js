class Node {
    constructor(val){
        this.data = val  ;
        this.left = null ; 
        this.right = null ;
    }

}

let root = null;
function buildTree(arr,start,end){
    if (start> end) return null;
    let mid = Math.round((start+end)/2);
    let node = new Node(arr[mid]);
    node.left = buildTree(arr,start,mid-1);
    node.right = buildTree(arr,mid+1,end);
    return node;
}


function insert(root,key){
    if (root===null){
        root = new Node(key);
        return root; 

    }
    if (key<root.data){
       root.left = insert(root.left,key);
    }else if(key>root.data){
        root.right =insert(root.right,key);
    }
    return root;
}


function deleteNode(root,key){
    if (root==null) return root; 
    if (root.data<key){
        root.right = deleteNode(root.right, key ); 
        return root; 
    }else if(root.data>key){
        root.left = deleteNode(root.left, key);
        return root; 
    }

    //if both children dont exist
    if(root.left===null){
        let temp = root.right; //null; 
        delete root; 
        return temp; //null;
    }else if(root.right===null){
        let temp = root.left; //null;  
        delete root; 
        return temp ; 
    }
    //if both children exist; 
     else{
        if (root===null) return root;
        let succParent=  root; 
        console.log(succParent.data + " : ROOT ");
        let succ = succParent.right ;
        while (succ.left!==null){
            succParent = succ; 
            succ= succ.left; 
        }
        if (succParent!==root){
            succParent.left =succ.right; 
        }else{
            succParent.right = succ.right;
        }
        root.data = succ.data;
        return root ;
     }
 }

function find(key,root){
    if(root ==null) return null;
    if (root.data !==key){

        if (key<root.data){
            find(key,root.left);
        }else find (key,root.right);
    }
    return root; 
}

function levelOrder(root,arr=[],queue=[]){
    if (root===null) return root;
    arr.push(root.data);
    queue.push(root.left);
    queue.push(root.right);

    while(queue.length){
        const level = queue[0];
        queue.unshift();
        levelOrder(level,arr,queue);
    }

    return arr; 

}

function height(root){
    if (root ==null){
        return root; 
    }else{
        let lheight = height(root.left);
        let rheight = height(root.right);
        
        if (lheight>rheight){
            return (lheight+1);
        }else{
            return (rheight+1);
        }
    }
}


const prettyPrint = (node, prefix = "", isLeft = true) => {
    if (node === null) {
      return;
    }
    if (node.right!== null) {
      prettyPrint(node.right, `${prefix}${isLeft ? "│   " : "    "}`, false);
    }
    console.log(`${prefix}${isLeft ? "└── " : "┌── "}${node.data}`);
    if (node.left!== null) {
      prettyPrint(node.left, `${prefix}${isLeft ? "    " : "│   "}`, true);
    }
  };


  let arr = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17];
  root = buildTree(arr,0,arr.length-1);
  let final  =deleteNode(root,6);
<<<<<<< HEAD
  prettyPrint(final);
  console.log(levelOrder(final));
=======
    prettyPrint(final);
   console.log("height: "+ height(final));
>>>>>>> 1b56d6b678cfc188aa13e5845aab8b42ec2efaf7
