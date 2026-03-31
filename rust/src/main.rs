use push_swap::Package;

fn main() {
    let package = Package::new();
    match package {
        Ok(mut content) => {
            println!("{:?}", content);
            content.sa();
            println!("{:?}", content);
            content.ra();
            println!("{:?}", content);
            content.rra();
            println!("{:?}", content);
            content.pb();
            println!("{:?}", content);
        }
        Err(msg) => println!("[x] {msg}."),
    }
}
