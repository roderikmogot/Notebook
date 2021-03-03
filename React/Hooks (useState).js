import './App.css';
import React, {useState} from 'react';
import Person from './Person/Person.js';

const app = props => {

    // useState returns exactly 2 elements
    // eslint-disable-next-line react-hooks/rules-of-hooks
    const [personsState, setPersonsState] = useState({
        persons: [
            {name: 'Rod', age: 17},
            {name: 'Randy', age: 16},
            {name: 'Will', age: 15}
        ],
        anotherVar: 'hello'
    });

    const switchNameHandler = () => {
            // DON'T DO THIS: this.state.persons[0].name = 'Mogot';
            // Replaces old state!
            setPersonsState({
                persons: [
                    {name: 'Roderik', age: 27},
                    {name: 'Randy', age: 16},
                    {name: 'Will', age: 35}
                ]
            })
        }

        return(
            <div className="App">
                <h1>Hi, I'm React App</h1>
                <button onClick={switchNameHandler}>Switch name</button>
                <Person name={personsState.persons[0].name} age={personsState.persons[0].age}/>
                <Person name={personsState.persons[1].name} age={personsState.persons[1].age}> My hobbies: running </Person>
                <Person name={personsState.persons[2].name} age={personsState.persons[2].age}/>
            </div>
        )
}

export default app;

//state = {
//         persons: [
//             {name: 'Rod', age: 17},
//             {name: 'Randy', age: 16},
//             {name: 'Will', age: 15}
//         ],
//         anotherVar: 'hello'
// //     }
//
//
//     switchNameHandler = () => {
//         //DON'T DO THIS: this.state.persons[0].name = 'Mogot';
//         this.setState({
//                 persons: [
//                     {name: 'Roderik', age: 27},
//                     {name: 'Randy', age: 16},
//                     {name: 'Will', age: 35}
//                 ]
//         })
//     }
