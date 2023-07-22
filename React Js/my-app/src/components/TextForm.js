import React, { useState } from 'react'

export default function TextForm(props) {
    const handleupClick = () => {
        // console.log("uppercase:" + text );
        let newText = text.toUpperCase();
        setText(newText);
        props.showAlert("Convert to UpperCases!" , "success");
    }

    const handlelowerClick = ()=>{
        let newText = text.toLocaleLowerCase();
        setText(newText);
        props.showAlert("Convert to LowerCase!" , "success");

    }

    const handleclearClick = ()=>{
        let newText = '';
        setText(newText);
        props.showAlert("Text Clear!" , "success");

    }

    const handleonchange = (event) => {
        // console.log("on change");
        setText(event.target.value);
    }

    const handlecopy = ()=>{
        navigator.clipboard.writeText(text);
        props.showAlert("Copy Text succeessfully" , "success");

    }

    const handleExtraSpaces = ()=>{
        let newText = text.split(/[ ]+/);
        setText(newText.join(" "))
        props.showAlert("Remove all Extra Spaces!" , "success");

    }


    const [text, setText] = useState('');
    return (
        <>
            <div className="container">
                <h1>{props.heading}</h1>
                <div className="mb-3">
                    <textarea className="form-control" value={text} style={{backgroundColor: props.mode==='dark'?'#384049':'white' , color: props.mode==='dark'?'white':'black'}} onChange={handleonchange} id="myBox" rows="8"></textarea>
                </div>
                <button disabled={text.length===0} className="btn btn-primary mx-2 my-2" onClick={handleupClick}>Convert to uppercase</button>
                <button disabled={text.length===0} className="btn btn-primary mx-2 my-2" onClick={handlelowerClick}>convert into lowercase</button>
                <button disabled={text.length===0} className="btn btn-primary mx-2 my-2" onClick={handleclearClick}>Clear</button>
                <button disabled={text.length===0} className="btn btn-primary mx-2 my-2" onClick={handlecopy}>copy text</button>
                <button disabled={text.length===0} className="btn btn-primary mx-2 my-2" onClick={handleExtraSpaces}>Remove Extra spaces</button>


            </div>
            
            <div className="container">
                <h1>contant summary</h1>
                {text.split(/\s+/).filter((word) => word !== "").length} words and {text.length} characters
                <p>{0.008 * text.split(" ").filter((word) => word !== "").length} mini read</p>
                <h2>preview</h2>
                <p>{text===""?'Nothing to preview':text}</p>
            </div>
        </>
    )
}
