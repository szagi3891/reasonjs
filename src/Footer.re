let component = ReasonReact.statelessComponent "Footer";

let make _ ::ff ::dd => {
  ...component,
  render: fun _ => {
    <div className="footer">
      <div style=(Style.titleCss)>
        (ReasonReact.stringToElement "Footer ... uuu")
      </div>
      <div style=(Style.titleCss)>
        (ReasonReact.stringToElement ff)
        <br/>
        (ReasonReact.stringToElement dd)
        <br/>
        (ReasonReact.stringToElement "Dasdasdasdsaaaaaaa")
      </div>
    </div>
  }
};