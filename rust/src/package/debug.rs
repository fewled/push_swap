use super::Package;

impl Package {
    pub fn debug(&self) {
        println!("--------------------------------------------------");
        println!("A : {:?}", self.a.content);
        println!("--------------------------------------------------");
        println!("B : {:?}", self.b.content);
        println!("--------------------------------------------------");
    }
}
