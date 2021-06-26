function checkData(){
    let form = document.getElementById("data"); 
    let name = document.getElementById("name").value;
    let lastName = document.getElementById("lastName").value;

    if(name != "" && lastName != ""){
        class person{
            name;
            lastName;
            
            constructor(name,lastName){
                this.name = name;
                this.lastName = lastName;
            }
            toString(){
                document.write("Name is : " + name + " Last name is : " + lastName);
            }
        }
        
        let aPerson = new person(name,lastName);
        aPerson.toString();
    }
}