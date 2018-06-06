type schoolPerson =
  | Teacher
  | Director
  | Student(string);

let greeting = stranger =>
  switch (stranger) {
  | Teacher => "Hey professor"
  | Director => "Hello director."
  | Student("Richard") => "Still here Ricky?"
  | Student(anyOtherName) => "hey, " ++ anyOtherName ++ "."
  };