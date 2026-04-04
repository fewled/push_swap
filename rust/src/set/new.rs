#[derive(Debug)]
pub struct Set {
    pub(crate) acost: usize,
    pub(crate) bcost: usize,
    pub(crate) cost: usize,
    pub(crate) apin: usize,
    pub(crate) bpin: usize,
    pub(crate) aval: i32,
    pub(crate) bval: i32,
    pub(crate) adir: bool,
    pub(crate) bdir: bool,
}

impl Set {
    pub fn new() -> Self {
        Self {
            acost: 0,
            bcost: 0,
            cost: 0,
            apin: 0,
            bpin: 0,
            aval: 0,
            bval: 0,
            adir: false,
            bdir: false,
        }
    }
}
