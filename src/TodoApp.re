type item = {
  title: string,
  complete: bool,
};

type state = {
  items: list item,
};

let itemsCss = ReactDOMRe.Style.make
  margin::"10px 0"
  textAlign::"center"
  flex::"1"
  overflow::"auto"
  ();

let component = ReasonReact.statefulComponent "TodoApp";

let make _ /*children*/ => {
  {
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
        <div style=(Style.titleCss)>
          (ReasonReact.stringToElement "What to do")
        </div>
        <div style=(itemsCss)>
          (ReasonReact.stringToElement "Nothing - bla bla bla2")
        </div>
        <Footer ff="pierwszy" dd=(string_of_int numItems) />
      </div>
    }
  }
}
