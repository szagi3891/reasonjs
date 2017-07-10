let component = ReasonReact.statelessComponent "Footer";

let make _ ::ff ::dd => {
  ...component,
  render: fun _ => {
    <div className="footer">
      <div className="title">
        (ReasonReact.stringToElement "Footer ... uuu")
      </div>
      <div className="title">
        (ReasonReact.stringToElement ff)
        <br/>
        (ReasonReact.stringToElement dd)
        <br/>
        (ReasonReact.stringToElement "Dasdasdasdsaaaaaaa")
      </div>
    </div>
  }
};