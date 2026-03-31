use std::env::args;

pub struct Package {
    args: Option<Vec<String>>,
}

impl Package {
    pub fn new() -> Self {
        let raw_args: Vec<String> = args().skip(1).collect();
        if raw_args.len() < 1 {
            return Self { args: None };
        }
        Self {
            args: Some(raw_args),
        }
    }
}
