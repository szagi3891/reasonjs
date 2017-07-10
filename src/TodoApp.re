type item = {
  title: string,
  complete: bool,
};

type state = {
  items: list item,
};

let component = ReasonReact.statefulComponent "TodoApp";

let make children => {
  ...component,
  initialState: fun () => {
    items: [{
      title: "pierwszy",
      complete: true
    }]
  },
  render: fun {state: {items}} => {
    let numItems = List.length items;
    <div className="app">
      <div className="title">
        (ReasonReact.stringToElement "What to do")
      </div>
      <div className="items">
        (ReasonReact.stringToElement "Nothing - bla bla bla2")
      </div>
      <Footer ff="pierwszy" dd=(string_of_int numItems) />
    </div>
  }
};
