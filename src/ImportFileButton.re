

let button_label = ReasonReact.stringToElement(
  switch(Language.language) {
    | English => "Import a file"
    | French => "Importer un fichier"
  });


let handleChange = (_event, _self) => Js.log("change");


/* Style */
let styleContainer = ReactDOMRe.Style.make(~position="relative", ());
let styleLabelFile = ReactDOMRe.Style.make(
  ~cursor="pointer",
  ~color="#00b1ca",
  ~fontWeight="bold",
  ());
let styleInputFile = ReactDOMRe.Style.make(
  ~display="none",
  ());

let id = "nfkzenflkznekfnl";


let component = ReasonReact.statelessComponent("ImportFileButton");

let make = (~name, _children) => {
  ...component,
  render: (self) =>
    <div style=styleContainer>
      <label htmlFor={id} style=styleLabelFile>button_label</label>
      <input
        id={id}
        style=styleInputFile
        _type="file"
        onChange={self.handle(handleChange)}
        accept=".csv, .CSV"
      />
    </div>
};

/* <input _type="file" onChange={self.handle(handleChange)}/> */
