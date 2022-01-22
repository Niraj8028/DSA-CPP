function say_hello(name) {
    console.log("hello there,NIraj");
    console.log(`hello there, ${name} how are you doing`);
}
function userRole(name, role) {
    switch (role) {
        case "admin":
            return `${name} has all access to web`;
            break;
        case "subadmin":
            return `${name} has limited access to web`;
            break;
        case "user":
            return `${name} can access the content`;
            break;
        default:
            return `${name} is a trial user`;
            break;
    }
}
console.log(userRole("Niraj","admin"));